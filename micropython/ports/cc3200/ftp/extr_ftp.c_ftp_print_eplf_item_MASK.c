
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint ;
typedef int _u32 ;
struct TYPE_5__ {char* month; } ;
struct TYPE_4__ {int fattrib; int fdate; int ftime; char* fname; scalar_t__ fsize; } ;
typedef TYPE_1__ FILINFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__,char*,char*,int,char*,scalar_t__,int,...) ;
 scalar_t__ FUNC_2 (int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_3 (char *VAR_3, uint32_t VAR_4, FILINFO *VAR_5) {

    char *VAR_6 = (VAR_5->fattrib & VAR_0) ? "d" : "-";
    uint32_t VAR_7;
    uint VAR_8 = (((VAR_5->fdate >> 5) & 0x0f) > 0) ? (((VAR_5->fdate >> 5) & 0x0f) - 1) : 0;
    uint VAR_9 = ((VAR_5->fdate & 0x1f) > 0) ? (VAR_5->fdate & 0x1f) : 1;
    uint VAR_10 = FUNC_2(1980 + ((VAR_5->fdate >> 9) & 0x7f),
                                                        (VAR_5->fdate >> 5) & 0x0f,
                                                        VAR_5->fdate & 0x1f,
                                                        (VAR_5->ftime >> 11) & 0x1f,
                                                        (VAR_5->ftime >> 5) & 0x3f,
                                                        2 * (VAR_5->ftime & 0x1f));
    VAR_7 = FUNC_0();
    if (VAR_1 < VAR_7 - VAR_10) {
        return FUNC_1(VAR_3, VAR_4, "%srw-rw-r--   1 root  root %9u %s %2u %5u %s\r\n",
                        VAR_6, (_u32)VAR_5->fsize, VAR_2[VAR_8].month, VAR_9,
                        1980 + ((VAR_5->fdate >> 9) & 0x7f), VAR_5->fname);
    }
    else {
        return FUNC_1(VAR_3, VAR_4, "%srw-rw-r--   1 root  root %9u %s %2u %02u:%02u %s\r\n",
                        VAR_6, (_u32)VAR_5->fsize, VAR_2[VAR_8].month, VAR_9,
                        (VAR_5->ftime >> 11) & 0x1f, (VAR_5->ftime >> 5) & 0x3f, VAR_5->fname);
    }
}
