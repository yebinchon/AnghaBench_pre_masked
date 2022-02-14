
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upid {int dummy; } ;
struct pid {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int name ;


 struct kmem_cache* FUNC_0 (struct kmem_cache*) ;
 int VAR_0 ;
 struct kmem_cache* FUNC_1 (char*,unsigned int,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct kmem_cache** VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char*,unsigned int) ;

__attribute__((used)) static struct kmem_cache *FUNC_5(unsigned int VAR_3)
{

 struct kmem_cache **VAR_4 = &VAR_1[VAR_3 - 1];
 struct kmem_cache *VAR_5;
 char VAR_6[4 + 10 + 1];
 unsigned int VAR_7;

 VAR_5 = FUNC_0(*VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_4(VAR_6, sizeof(VAR_6), "pid_%u", VAR_3 + 1);
 VAR_7 = sizeof(struct pid) + VAR_3 * sizeof(struct upid);
 FUNC_2(&VAR_2);

 if (!*VAR_4)
  *VAR_4 = FUNC_1(VAR_6, VAR_7, 0, VAR_0, 0);
 FUNC_3(&VAR_2);

 return FUNC_0(*VAR_4);
}
