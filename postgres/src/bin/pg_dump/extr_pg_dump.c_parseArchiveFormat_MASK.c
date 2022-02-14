
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ArchiveMode ;
typedef int ArchiveFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static ArchiveFormat
FUNC_2(const char *VAR_6, ArchiveMode *VAR_7)
{
 ArchiveFormat VAR_8;

 *VAR_7 = VAR_3;

 if (FUNC_1(VAR_6, "a") == 0 || FUNC_1(VAR_6, "append") == 0)
 {

  VAR_8 = VAR_4;
  *VAR_7 = VAR_2;
 }
 else if (FUNC_1(VAR_6, "c") == 0)
  VAR_8 = VAR_0;
 else if (FUNC_1(VAR_6, "custom") == 0)
  VAR_8 = VAR_0;
 else if (FUNC_1(VAR_6, "d") == 0)
  VAR_8 = VAR_1;
 else if (FUNC_1(VAR_6, "directory") == 0)
  VAR_8 = VAR_1;
 else if (FUNC_1(VAR_6, "p") == 0)
  VAR_8 = VAR_4;
 else if (FUNC_1(VAR_6, "plain") == 0)
  VAR_8 = VAR_4;
 else if (FUNC_1(VAR_6, "t") == 0)
  VAR_8 = VAR_5;
 else if (FUNC_1(VAR_6, "tar") == 0)
  VAR_8 = VAR_5;
 else
  FUNC_0("invalid output format \"%s\" specified", VAR_6);
 return VAR_8;
}
