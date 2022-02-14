
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int *,unsigned long) ;
 void* FUNC_1 (int ,size_t) ;
 void* FUNC_2 (int ,size_t) ;
 void* FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ,size_t,int ,int ) ;
 void* FUNC_5 (int ,size_t,unsigned long) ;

void *FUNC_6(resource_size_t VAR_7, size_t VAR_8, unsigned long VAR_9)
{
 int VAR_10 = FUNC_4(VAR_7, VAR_8,
           VAR_0, VAR_1);
 void *VAR_11 = ((void*)0);

 if (!VAR_9)
  return ((void*)0);

 if (VAR_10 == VAR_6) {
  FUNC_0(1, "memremap attempted on mixed range %pa size: %#lx\n",
    &VAR_7, (unsigned long) VAR_8);
  return ((void*)0);
 }


 if (VAR_9 & VAR_2) {






  if (VAR_10 == VAR_5)
   VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_9);
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_7, VAR_8);
 }







 if (!VAR_11 && VAR_10 == VAR_5 && VAR_9 != VAR_2) {
  FUNC_0(1, "memremap attempted on ram %pa size: %#lx\n",
    &VAR_7, (unsigned long) VAR_8);
  return ((void*)0);
 }

 if (!VAR_11 && (VAR_9 & VAR_4))
  VAR_11 = FUNC_3(VAR_7, VAR_8);

 if (!VAR_11 && (VAR_9 & VAR_3))
  VAR_11 = FUNC_2(VAR_7, VAR_8);

 return VAR_11;
}
