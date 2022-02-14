
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sinfo {int const st; } ;
typedef int adns_status ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
  const adns_status *VAR_2= VAR_0;
  const struct sinfo *VAR_3= VAR_1;

  return *VAR_2 < VAR_3->st ? -1 : *VAR_2 > VAR_3->st ? 1 : 0;
}
