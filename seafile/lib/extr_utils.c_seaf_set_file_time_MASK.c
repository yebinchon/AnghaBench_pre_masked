
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ time_t ;
struct utimbuf {scalar_t__ modtime; int actime; } ;
struct stat {int st_atime; } ;
typedef scalar_t__ guint64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*,struct utimbuf*) ;
 int * FUNC_6 (char const*) ;

int
FUNC_7 (const char *VAR_1, guint64 VAR_2)
{

    struct stat VAR_3;
    struct utimbuf VAR_4;

    if (FUNC_3 (VAR_1, &VAR_3) < 0) {
        FUNC_1 ("Failed to stat %s: %s.\n", VAR_1, FUNC_4(VAR_0));
        return -1;
    }

    VAR_4.actime = VAR_3.st_atime;
    VAR_4.modtime = (time_t)VAR_2;

    return FUNC_5 (VAR_1, &VAR_4);
}
