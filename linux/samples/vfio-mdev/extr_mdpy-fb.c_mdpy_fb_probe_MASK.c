
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct mdpy_fb_par {int palette; } ;
struct TYPE_7__ {int smem_len; int smem_start; scalar_t__ line_length; } ;
struct TYPE_6__ {scalar_t__ yres_virtual; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ xres; } ;
struct fb_info {int screen_base; int node; int pseudo_palette; int flags; int * fbops; TYPE_3__ fix; TYPE_4__* apertures; int screen_size; TYPE_2__ var; struct mdpy_fb_par* par; } ;
struct TYPE_8__ {TYPE_1__* ranges; } ;
struct TYPE_5__ {int size; int base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* FUNC_0 (int) ;
 struct fb_info* FUNC_1 (int,int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,char*,...) ;
 int FUNC_7 (struct pci_dev*,char*,scalar_t__,...) ;
 int FUNC_8 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,char*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,struct fb_info*) ;
 int FUNC_14 (struct fb_info*) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_11,
    const struct pci_device_id *VAR_12)
{
 struct fb_info *VAR_13;
 struct mdpy_fb_par *VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 int VAR_18;

 VAR_18 = FUNC_5(VAR_11);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_10(VAR_11, "mdpy-fb");
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_8(VAR_11, VAR_5, &VAR_15);
 FUNC_8(VAR_11, VAR_7, &VAR_16);
 FUNC_8(VAR_11, VAR_6, &VAR_17);
 if (VAR_15 != VAR_0) {
  FUNC_6(VAR_11, "format mismatch (0x%x != 0x%x)\n",
   VAR_15, VAR_0);
  return -VAR_1;
 }
 if (VAR_16 < 100 || VAR_16 > 10000) {
  FUNC_6(VAR_11, "width (%d) out of range\n", VAR_16);
  return -VAR_1;
 }
 if (VAR_17 < 100 || VAR_17 > 10000) {
  FUNC_6(VAR_11, "height (%d) out of range\n", VAR_17);
  return -VAR_1;
 }
 FUNC_7(VAR_11, "mdpy found: %dx%d framebuffer\n",
   VAR_16, VAR_17);

 VAR_13 = FUNC_1(sizeof(struct mdpy_fb_par), &VAR_11->dev);
 if (!VAR_13)
  goto err_release_regions;
 FUNC_13(VAR_11, VAR_13);
 VAR_14 = VAR_13->par;

 VAR_13->fix = VAR_8;
 VAR_13->fix.smem_start = FUNC_12(VAR_11, 0);
 VAR_13->fix.smem_len = FUNC_11(VAR_11, 0);
 VAR_13->fix.line_length = VAR_16 * 4;

 VAR_13->var = VAR_10;
 VAR_13->var.xres = VAR_16;
 VAR_13->var.yres = VAR_17;
 VAR_13->var.xres_virtual = VAR_16;
 VAR_13->var.yres_virtual = VAR_17;

 VAR_13->screen_size = VAR_13->fix.smem_len;
 VAR_13->screen_base = FUNC_3(VAR_13->fix.smem_start,
        VAR_13->screen_size);
 if (!VAR_13->screen_base) {
  FUNC_6(VAR_11, "ioremap(pcibar) failed\n");
  VAR_18 = -VAR_2;
  goto err_release_fb;
 }

 VAR_13->apertures = FUNC_0(1);
 if (!VAR_13->apertures) {
  VAR_18 = -VAR_3;
  goto err_unmap;
 }
 VAR_13->apertures->ranges[0].base = VAR_13->fix.smem_start;
 VAR_13->apertures->ranges[0].size = VAR_13->fix.smem_len;

 VAR_13->fbops = &VAR_9;
 VAR_13->flags = VAR_4;
 VAR_13->pseudo_palette = VAR_14->palette;

 VAR_18 = FUNC_14(VAR_13);
 if (VAR_18 < 0) {
  FUNC_6(VAR_11, "mdpy-fb device register failed: %d\n", VAR_18);
  goto err_unmap;
 }

 FUNC_7(VAR_11, "fb%d registered\n", VAR_13->node);
 return 0;

err_unmap:
 FUNC_4(VAR_13->screen_base);

err_release_fb:
 FUNC_2(VAR_13);

err_release_regions:
 FUNC_9(VAR_11);

 return VAR_18;
}
