
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sidtab {int * rcache; } ;
struct context {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct context*) ;
 int FUNC_2 (struct sidtab*,size_t,int ) ;
 int FUNC_3 (struct sidtab*,size_t,size_t) ;

__attribute__((used)) static int FUNC_4(struct sidtab *VAR_3, struct context *VAR_4,
    u32 *VAR_5)
{
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  u32 VAR_7 = FUNC_0(VAR_3->rcache[VAR_6]);

  if (VAR_7 >= VAR_1)
   continue;

  if (FUNC_1(FUNC_2(VAR_3, VAR_7, 0), VAR_4)) {
   FUNC_3(VAR_3, VAR_7, VAR_6);
   *VAR_5 = VAR_7;
   return 0;
  }
 }
 return -VAR_0;
}
