
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {int flags; char* path; scalar_t__ length; scalar_t__ start; scalar_t__ space; } ;
struct chmFile {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,int,int,char*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

int FUNC_4(struct chmFile *VAR_6,
              struct chmUnitInfo *VAR_7,
              void *VAR_8)
{
    static char VAR_9[128];
 FUNC_0(VAR_9, 0, 128);
 if(VAR_7->flags & VAR_3)
  FUNC_3(VAR_9, "normal ");
 else if(VAR_7->flags & VAR_4)
  FUNC_3(VAR_9, "special ");
 else if(VAR_7->flags & VAR_2)
  FUNC_3(VAR_9, "meta ");

 if(VAR_7->flags & VAR_0)
  FUNC_2(VAR_9, "dir");
 else if(VAR_7->flags & VAR_1)
  FUNC_2(VAR_9, "file");

    FUNC_1("   %1d %8d %8d   %s\t\t%s\n",
           (int)VAR_7->space,
           (int)VAR_7->start,
           (int)VAR_7->length,
     VAR_9,
           VAR_7->path);
    return VAR_5;}
