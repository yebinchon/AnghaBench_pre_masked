
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct machine {int dummy; } ;
struct dso_cache {int dummy; } ;
struct dso {int dummy; } ;
typedef int ssize_t ;


 struct dso_cache* FUNC_0 (struct dso*,int ) ;
 int FUNC_1 (struct dso_cache*,int ,int *,int ) ;
 int FUNC_2 (struct dso*,struct machine*,int ,int *,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct dso *VAR_0, struct machine *VAR_1,
         u64 VAR_2, u8 *VAR_3, ssize_t VAR_4)
{
 struct dso_cache *VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2);
 if (VAR_5)
  return FUNC_1(VAR_5, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
