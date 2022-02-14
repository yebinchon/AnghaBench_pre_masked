
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sinfo {char const* string; } ;
typedef int adns_status ;


 struct sinfo* FUNC_0 (int ) ;

const char *FUNC_1(adns_status VAR_0) {
  const struct sinfo *VAR_1;

  VAR_1= FUNC_0(VAR_0);
  return VAR_1->string;
}
