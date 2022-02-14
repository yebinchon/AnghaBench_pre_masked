
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_op {int nframes; } ;


 scalar_t__ FUNC_0 (struct bcm_op*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct bcm_op *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->nframes > 1) {
  unsigned int VAR_2;


  for (VAR_2 = 1; VAR_2 < VAR_0->nframes; VAR_2++)
   VAR_1 += FUNC_0(VAR_0, VAR_2);

 } else {

  VAR_1 += FUNC_0(VAR_0, 0);
 }

 return VAR_1;
}
