
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (int ) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 struct resource* FUNC_1 (int *,scalar_t__,scalar_t__,char*,unsigned long) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct resource *FUNC_3(u64 VAR_6, u64 VAR_7)
{
 struct resource *VAR_8;
 unsigned long VAR_9 = VAR_3 | VAR_2;
 char *VAR_10 = "System RAM";

 if (VAR_6 + VAR_7 > VAR_5)
  return FUNC_0(-VAR_0);






 VAR_8 = FUNC_1(&VAR_4, VAR_6, VAR_7,
          VAR_10, VAR_9);

 if (!VAR_8) {
  FUNC_2("Unable to reserve System RAM region: %016llx->%016llx\n",
    VAR_6, VAR_6 + VAR_7);
  return FUNC_0(-VAR_1);
 }
 return VAR_8;
}
