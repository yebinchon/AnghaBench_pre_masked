
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ handle; int wxflag; } ;
typedef TYPE_1__ ioinfo ;
struct TYPE_9__ {int _file; } ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_0 (char,TYPE_2__*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (size_t) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int,int,TYPE_2__*) ;
 int FUNC_5 (char*,int,int,TYPE_2__*) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (size_t,char*,int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_8 (size_t,char*,int) ;

__attribute__((used)) static void FUNC_9( void )
{
    HANDLE VAR_7;
    ioinfo *VAR_8;
    int VAR_9;
    char VAR_10;

    VAR_5 = 0xdeadbeef;
    VAR_7 = (HANDLE)FUNC_1(VAR_3);
    FUNC_6(VAR_7 == (HANDLE)-2, "handle = %p\n", VAR_7);
    FUNC_6(VAR_5 == 0xdeadbeef, "errno = %d\n", VAR_5);

    VAR_8 = &VAR_4[VAR_3/VAR_2][VAR_3%VAR_2];
    FUNC_6(VAR_8->handle == (HANDLE)-2, "info->handle = %p\n", VAR_8->handle);
    FUNC_6(VAR_8->wxflag == 0xc1, "info->wxflag = %x\n", VAR_8->wxflag);

    FUNC_6(VAR_6->_file == -2, "stdin->_file = %d\n", VAR_6->_file);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_4(&VAR_10, 1, 1, VAR_6);
    FUNC_6(!VAR_9, "fread(stdin) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_7(-2, &VAR_10, 1);
    FUNC_6(VAR_9 == -1, "read(-2) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_7(VAR_3, &VAR_10, 1);
    FUNC_6(VAR_9 == -1, "read(STDIN_FILENO) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_0('a', VAR_6);
    FUNC_6(VAR_9 == VAR_1, "_flsbuf(stdin) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_5(&VAR_10, 1, 1, VAR_6);
    FUNC_6(!VAR_9, "fwrite(stdin) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_8(-2, &VAR_10, 1);
    FUNC_6(VAR_9 == -1, "write(-2) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_8(VAR_3, &VAR_10, 1);
    FUNC_6(VAR_9 == -1, "write(STDIN_FILENO) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_3(VAR_6);
    FUNC_6(VAR_9 == -1, "fclose(stdin) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_2(-2);
    FUNC_6(VAR_9 == -1, "close(-2) returned %d\n", VAR_9);
    FUNC_6(VAR_5 == VAR_0, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_9 = FUNC_2(VAR_3);
    FUNC_6(VAR_9==-1 || !VAR_9, "close(STDIN_FILENO) returned %d\n", VAR_9);
    FUNC_6((VAR_9==-1 && VAR_5==VAR_0) || (!VAR_9 && VAR_5==0xdeadbeef), "errno = %d\n", VAR_5);
}
