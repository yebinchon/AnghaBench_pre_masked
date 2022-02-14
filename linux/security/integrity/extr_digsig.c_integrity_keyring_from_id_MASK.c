
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int) ;
 unsigned int const VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int VAR_2 ;
 struct key** VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (char*,int ,int) ;
 struct key* FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static struct key *FUNC_5(const unsigned int VAR_5)
{
 if (VAR_5 >= VAR_1)
  return FUNC_0(-VAR_0);

 if (!VAR_3[VAR_5]) {
  VAR_3[VAR_5] =
   FUNC_4(&VAR_2, VAR_4[VAR_5], ((void*)0));
  if (FUNC_1(VAR_3[VAR_5])) {
   int VAR_6 = FUNC_2(VAR_3[VAR_5]);
   FUNC_3("no %s keyring: %d\n", VAR_4[VAR_5], VAR_6);
   VAR_3[VAR_5] = ((void*)0);
   return FUNC_0(VAR_6);
  }
 }

 return VAR_3[VAR_5];
}
