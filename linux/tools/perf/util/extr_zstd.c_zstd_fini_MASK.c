
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zstd_data {int * cstream; int * dstream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct zstd_data *VAR_0)
{
 if (VAR_0->dstream) {
  FUNC_1(VAR_0->dstream);
  VAR_0->dstream = ((void*)0);
 }

 if (VAR_0->cstream) {
  FUNC_0(VAR_0->cstream);
  VAR_0->cstream = ((void*)0);
 }

 return 0;
}
