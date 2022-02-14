
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {char* path; scalar_t__ length; } ;
struct chmFile {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct chmFile *VAR_1, struct chmUnitInfo *VAR_2,
                           void *VAR_3)
{
    FILE *VAR_4 = (FILE*) VAR_3;
    FUNC_0(VAR_4,
            "<tr>"
            "<td align=right>%8d\n</td>"
            "<td><a href=\"%s\">%s</a></td>"
            "</tr>",
            (int)VAR_2->length, VAR_2->path, VAR_2->path);
    return VAR_0;
}
