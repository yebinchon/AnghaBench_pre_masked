
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_int64_t ;
struct zip_source {int dummy; } ;
struct zip {int error; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,struct zip_source*) ;
 int VAR_2 ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (struct zip_source*) ;
 scalar_t__ FUNC_4 (struct zip_source*) ;
 scalar_t__ FUNC_5 (struct zip_source*,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct zip *VAR_3, struct zip_source *VAR_4, FILE *VAR_5)
{
    char VAR_6[VAR_0];
    zip_int64_t VAR_7;
    int VAR_8;

    if (FUNC_4(VAR_4) < 0) {
 FUNC_1(&VAR_3->error, VAR_4);
 return -1;
    }

    VAR_8 = 0;
    while ((VAR_7=FUNC_5(VAR_4, VAR_6, sizeof(VAR_6))) > 0) {
 if (FUNC_2(VAR_6, 1, (size_t)VAR_7, VAR_5) != (size_t)VAR_7) {
     FUNC_0(&VAR_3->error, VAR_1, VAR_2);
     VAR_8 = -1;
     break;
 }
    }

    if (VAR_7 < 0) {
 if (VAR_8 == 0)
     FUNC_1(&VAR_3->error, VAR_4);
 VAR_8 = -1;
    }

    FUNC_3(VAR_4);

    return VAR_8;
}
