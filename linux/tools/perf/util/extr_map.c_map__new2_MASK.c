
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct map {int dummy; } ;
struct kmap {int dummy; } ;
struct dso {scalar_t__ kernel; } ;


 struct map* FUNC_0 (int,int) ;
 int FUNC_1 (struct map*,int ,int ,int ,struct dso*) ;

struct map *FUNC_2(u64 VAR_0, struct dso *VAR_1)
{
 struct map *VAR_2 = FUNC_0(1, (sizeof(*VAR_2) +
         (VAR_1->kernel ? sizeof(struct kmap) : 0)));
 if (VAR_2 != ((void*)0)) {



  FUNC_1(VAR_2, VAR_0, 0, 0, VAR_1);
 }

 return VAR_2;
}
