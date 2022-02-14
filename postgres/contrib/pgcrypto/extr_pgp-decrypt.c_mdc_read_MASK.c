
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_2__ {int mdc_ctx; scalar_t__ in_mdc_pkt; scalar_t__ use_mdcbuf_filter; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int **) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, PullFilter *VAR_2, int VAR_3,
   uint8 **VAR_4, uint8 *VAR_5, int VAR_6)
{
 int VAR_7;
 PGP_Context *VAR_8 = VAR_1;


 if (VAR_8->use_mdcbuf_filter || VAR_8->in_mdc_pkt)
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 == 0)
 {
  FUNC_1("mdc_read: unexpected eof");
  return VAR_0;
 }
 FUNC_2(VAR_8->mdc_ctx, *VAR_4, VAR_7);

 return VAR_7;
}
