
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {int build_id; int has_build_id; } ;


 int VAR_0 ;
 int FUNC_0 (char**,size_t,char*,char*,...) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int,int,int) ;
 char* FUNC_3 (char*,int *,int ) ;
 int FUNC_4 (struct dso*) ;
 int FUNC_5 (struct dso*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;

char *FUNC_8(const struct dso *VAR_1, char *VAR_2, size_t VAR_3,
        bool VAR_4)
{
 bool VAR_5 = FUNC_4((struct dso *)VAR_1);
 bool VAR_6 = FUNC_5((struct dso *)VAR_1);
 char VAR_7[VAR_0];
 char *VAR_8;
 bool VAR_9 = (VAR_2 == ((void*)0));
 int VAR_10;

 if (!VAR_1->has_build_id)
  return ((void*)0);

 FUNC_1(VAR_1->build_id, sizeof(VAR_1->build_id), VAR_7);
 VAR_8 = FUNC_3(VAR_7, ((void*)0), 0);
 if (!VAR_8)
  return ((void*)0);


 if (FUNC_7(VAR_8))
  VAR_10 = FUNC_0(&VAR_2, VAR_3, "%s", VAR_8);
 else
  VAR_10 = FUNC_0(&VAR_2, VAR_3, "%s/%s", VAR_8,
    FUNC_2(VAR_5, VAR_6,
        VAR_4));
 if (VAR_10 < 0 || (!VAR_9 && VAR_3 < (unsigned int)VAR_10))
  VAR_2 = ((void*)0);
 FUNC_6(VAR_8);

 return VAR_2;
}
