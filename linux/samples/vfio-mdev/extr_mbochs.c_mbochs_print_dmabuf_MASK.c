
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int drm_format; int size; int offset; int stride; int height; int width; } ;
struct mbochs_dmabuf {int pagecount; TYPE_1__ mode; int id; TYPE_2__* mdev_state; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int mdev; } ;


 int FUNC_0 (struct device*,char*,char const*,int ,int,int,int,int,int ,int ,int ,int ,int ,int ) ;
 struct device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mbochs_dmabuf *VAR_0,
    const char *VAR_1)
{
 struct device *VAR_2 = FUNC_1(VAR_0->mdev_state->mdev);
 u32 VAR_3 = VAR_0->mode.drm_format;

 FUNC_0(VAR_2, "%s/%d: %c%c%c%c, %dx%d, stride %d, off 0x%llx, size 0x%llx, pages %ld\n",
  VAR_1, VAR_0->id,
  VAR_3 ? ((VAR_3 >> 0) & 0xff) : '-',
  VAR_3 ? ((VAR_3 >> 8) & 0xff) : '-',
  VAR_3 ? ((VAR_3 >> 16) & 0xff) : '-',
  VAR_3 ? ((VAR_3 >> 24) & 0xff) : '-',
  VAR_0->mode.width, VAR_0->mode.height, VAR_0->mode.stride,
  VAR_0->mode.offset, VAR_0->mode.size, VAR_0->pagecount);
}
