
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* fSpec; int gzOut; scalar_t__ mode; void* OF; scalar_t__ FH; } ;
typedef TYPE_1__ ArchiveHandle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (char const*,int ) ;
 void* FUNC_5 (int ,char*) ;
 void* FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static void
FUNC_9(ArchiveHandle *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5)
 {
  if (FUNC_8(VAR_5, "-") == 0)
   VAR_7 = FUNC_3(VAR_3);
  else
   VAR_7 = -1;
 }
 else if (VAR_4->FH)
  VAR_7 = FUNC_3(VAR_4->FH);
 else if (VAR_4->fSpec)
 {
  VAR_7 = -1;
  VAR_5 = VAR_4->fSpec;
 }
 else
  VAR_7 = FUNC_3(VAR_3);
 {
  if (VAR_4->mode == VAR_2)
  {
   if (VAR_7 >= 0)
    VAR_4->OF = FUNC_2(FUNC_0(VAR_7), VAR_0);
   else
    VAR_4->OF = FUNC_4(VAR_5, VAR_0);
  }
  else
  {
   if (VAR_7 >= 0)
    VAR_4->OF = FUNC_2(FUNC_0(VAR_7), VAR_1);
   else
    VAR_4->OF = FUNC_4(VAR_5, VAR_1);
  }
  VAR_4->gzOut = 0;
 }

 if (!VAR_4->OF)
 {
  if (VAR_5)
   FUNC_1("could not open output file \"%s\": %m", VAR_5);
  else
   FUNC_1("could not open output file: %m");
 }
}
