
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mempolicy {unsigned short mode; unsigned short flags; int refcnt; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct mempolicy* FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 struct mempolicy* FUNC_3 (int ,int ) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (char*,unsigned short,unsigned short,int ) ;

__attribute__((used)) static struct mempolicy *FUNC_7(unsigned short VAR_10, unsigned short VAR_11,
      nodemask_t *VAR_12)
{
 struct mempolicy *VAR_13;

 FUNC_6("setting mode %d flags %d nodes[0] %lx\n",
   VAR_10, VAR_11, VAR_12 ? FUNC_4(*VAR_12)[0] : VAR_8);

 if (VAR_10 == VAR_3) {
  if (VAR_12 && !FUNC_5(*VAR_12))
   return FUNC_0(-VAR_0);
  return ((void*)0);
 }
 FUNC_1(!VAR_12);






 if (VAR_10 == VAR_7) {
  if (FUNC_5(*VAR_12)) {
   if (((VAR_11 & VAR_5) ||
        (VAR_11 & VAR_4)))
    return FUNC_0(-VAR_0);
  }
 } else if (VAR_10 == VAR_6) {
  if (!FUNC_5(*VAR_12) ||
      (VAR_11 & VAR_5) ||
      (VAR_11 & VAR_4))
   return FUNC_0(-VAR_0);
  VAR_10 = VAR_7;
 } else if (FUNC_5(*VAR_12))
  return FUNC_0(-VAR_0);
 VAR_13 = FUNC_3(VAR_9, VAR_2);
 if (!VAR_13)
  return FUNC_0(-VAR_1);
 FUNC_2(&VAR_13->refcnt, 1);
 VAR_13->mode = VAR_10;
 VAR_13->flags = VAR_11;

 return VAR_13;
}
