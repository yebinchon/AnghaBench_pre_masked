
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct MDCBufData {scalar_t__ avail; scalar_t__ pos; scalar_t__ buf; int buflen; int mdc_avail; scalar_t__ mdc_buf; } ;
typedef int PullFilter ;


 int FUNC_0 (struct MDCBufData*) ;
 int FUNC_1 (struct MDCBufData*,int *,int) ;
 int FUNC_2 (struct MDCBufData*,int *,int) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int,int **) ;

__attribute__((used)) static int
FUNC_5(struct MDCBufData *VAR_0, PullFilter *VAR_1)
{
 uint8 *VAR_2;
 int VAR_3;
 int VAR_4;


 if (VAR_0->avail > 0 && VAR_0->pos != VAR_0->buf)
  FUNC_3(VAR_0->buf, VAR_0->pos, VAR_0->avail);
 VAR_0->pos = VAR_0->buf;


 VAR_4 = VAR_0->buflen + 22 - VAR_0->avail - VAR_0->mdc_avail;
 VAR_3 = FUNC_4(VAR_1, VAR_4, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3 == 0)
  return FUNC_0(VAR_0);


 if (VAR_3 >= 22)
 {
  FUNC_1(VAR_0, VAR_0->mdc_buf, VAR_0->mdc_avail);
  VAR_0->mdc_avail = 0;

  FUNC_1(VAR_0, VAR_2, VAR_3 - 22);
  FUNC_2(VAR_0, VAR_2 + VAR_3 - 22, 22);
 }
 else
 {
  int VAR_5 = VAR_0->mdc_avail + VAR_3 - 22;

  if (VAR_5 > 0)
  {
   FUNC_1(VAR_0, VAR_0->mdc_buf, VAR_5);
   VAR_0->mdc_avail -= VAR_5;
   FUNC_3(VAR_0->mdc_buf, VAR_0->mdc_buf + VAR_5, VAR_0->mdc_avail);
  }
  FUNC_2(VAR_0, VAR_2, VAR_3);
 }
 return 0;
}
