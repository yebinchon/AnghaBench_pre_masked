
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {char* mmap_name; } ;
struct dso {char* long_name; int nsinfo; int build_id; } ;


 int FUNC_0 (int ,int,char const*,int ,int,int) ;
 int FUNC_1 (struct dso*) ;
 scalar_t__ FUNC_2 (struct dso*) ;
 int FUNC_3 (struct dso*) ;

__attribute__((used)) static int FUNC_4(struct dso *VAR_0, struct machine *VAR_1)
{
 bool VAR_2 = FUNC_1(VAR_0);
 bool VAR_3 = FUNC_3(VAR_0);
 const char *VAR_4 = VAR_0->long_name;

 if (FUNC_2(VAR_0)) {
  VAR_2 = 1;
  VAR_4 = VAR_1->mmap_name;
 }
 return FUNC_0(VAR_0->build_id, sizeof(VAR_0->build_id), VAR_4,
         VAR_0->nsinfo, VAR_2, VAR_3);
}
