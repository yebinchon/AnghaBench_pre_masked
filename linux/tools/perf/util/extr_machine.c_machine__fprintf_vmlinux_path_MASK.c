
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct machine {int dummy; } ;
struct dso {int has_build_id; } ;
typedef int filename ;
struct TYPE_2__ {struct dso* dso; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dso*,char*,int,int) ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 TYPE_1__* FUNC_2 (struct machine*) ;
 char** VAR_1 ;
 int VAR_2 ;

size_t FUNC_3(struct machine *VAR_3, FILE *VAR_4)
{
 int VAR_5;
 size_t VAR_6 = 0;
 struct dso *VAR_7 = FUNC_2(VAR_3)->dso;

 if (VAR_7->has_build_id) {
  char VAR_8[VAR_0];
  if (FUNC_0(VAR_7, VAR_8, sizeof(VAR_8),
        0))
   VAR_6 += FUNC_1(VAR_4, "[0] %s\n", VAR_8);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  VAR_6 += FUNC_1(VAR_4, "[%d] %s\n",
       VAR_5 + VAR_7->has_build_id, VAR_1[VAR_5]);

 return VAR_6;
}
