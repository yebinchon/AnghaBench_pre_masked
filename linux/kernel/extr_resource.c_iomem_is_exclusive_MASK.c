
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int start; int end; int flags; struct resource* child; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource VAR_5 ;
 struct resource* FUNC_1 (int *,struct resource*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

bool FUNC_4(u64 VAR_8)
{
 struct resource *VAR_9 = &VAR_5;
 bool VAR_10 = 0;
 loff_t VAR_11;
 int VAR_12 = VAR_4;

 if (!VAR_7)
  return 0;

 VAR_8 = VAR_8 & VAR_3;

 FUNC_2(&VAR_6);
 for (VAR_9 = VAR_9->child; VAR_9 ; VAR_9 = FUNC_1(((void*)0), VAR_9, &VAR_11)) {




  if (VAR_9->start >= VAR_8 + VAR_12)
   break;
  if (VAR_9->end < VAR_8)
   continue;





  if ((VAR_9->flags & VAR_1) == 0)
   continue;
  if (FUNC_0(VAR_0)
    || VAR_9->flags & VAR_2) {
   VAR_10 = 1;
   break;
  }
 }
 FUNC_3(&VAR_6);

 return VAR_10;
}
