
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm_adsp_compr_buf {scalar_t__ read_index; int avail; TYPE_3__* dsp; TYPE_2__* regions; } ;
struct wm_adsp_compr {int raw_buf; struct wm_adsp_compr_buf* buf; } ;
struct TYPE_8__ {TYPE_1__* caps; } ;
struct TYPE_7__ {size_t fw; } ;
struct TYPE_6__ {scalar_t__ cumulative_size; int mem_type; unsigned int base_addr; unsigned int offset; } ;
struct TYPE_5__ {int num_regions; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct wm_adsp_compr_buf*) ;
 int FUNC_2 (struct wm_adsp_compr_buf*,int ,scalar_t__) ;
 int FUNC_3 (struct wm_adsp_compr*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_4 (TYPE_3__*,int,unsigned int,int,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct wm_adsp_compr *VAR_4, int VAR_5)
{
 struct wm_adsp_compr_buf *VAR_6 = VAR_4->buf;
 unsigned int VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;


 for (VAR_11 = 0; VAR_11 < VAR_3[VAR_6->dsp->fw].caps->num_regions; ++VAR_11)
  if (VAR_6->read_index < VAR_6->regions[VAR_11].cumulative_size)
   break;

 if (VAR_11 == VAR_3[VAR_6->dsp->fw].caps->num_regions)
  return -VAR_0;

 VAR_8 = VAR_6->regions[VAR_11].mem_type;
 VAR_7 = VAR_6->regions[VAR_11].base_addr +
      (VAR_6->read_index - VAR_6->regions[VAR_11].offset);

 VAR_10 = FUNC_3(VAR_4);
 VAR_9 = VAR_6->regions[VAR_11].cumulative_size - VAR_6->read_index;

 if (VAR_9 > VAR_5)
  VAR_9 = VAR_5;
 if (VAR_9 > VAR_6->avail)
  VAR_9 = VAR_6->avail;
 if (VAR_9 > VAR_10)
  VAR_9 = VAR_10;
 if (!VAR_9)
  return 0;


 VAR_12 = FUNC_4(VAR_6->dsp, VAR_8, VAR_7,
          VAR_9, VAR_4->raw_buf);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_5(VAR_4->raw_buf, VAR_9, VAR_1);


 VAR_6->read_index += VAR_9;
 if (VAR_6->read_index == FUNC_1(VAR_6))
  VAR_6->read_index = 0;

 VAR_12 = FUNC_2(VAR_6, FUNC_0(VAR_2),
       VAR_6->read_index);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_6->avail -= VAR_9;

 return VAR_9;
}
