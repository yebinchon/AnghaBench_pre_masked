
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct chmFile {scalar_t__ fd; int mutex; } ;
typedef scalar_t__ UInt64 ;
typedef int UChar ;
struct TYPE_4__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ Int64 ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__,TYPE_1__,TYPE_1__*,int ) ;

__attribute__((used)) static Int64 FUNC_4(struct chmFile *VAR_3,
                              UChar *VAR_4,
                              UInt64 VAR_5,
                              Int64 VAR_6)
{
    Int64 VAR_7=0;
    if (VAR_3->fd == VAR_0)
        return VAR_7;

    FUNC_0(VAR_3->mutex);

    {
        LARGE_INTEGER VAR_8, VAR_9;
        DWORD VAR_10=0;


        VAR_9.QuadPart = 0;
        FUNC_3( VAR_3->fd, VAR_9, &VAR_8, VAR_2 );
        VAR_9.QuadPart = VAR_5;
        FUNC_3( VAR_3->fd, VAR_9, ((void*)0), VAR_1 );


        if (FUNC_2(VAR_3->fd,
                     VAR_4,
                     (DWORD)VAR_6,
                     &VAR_10,
                     ((void*)0)))
            VAR_7 = VAR_10;
        else
            VAR_7 = 0;


        FUNC_3( VAR_3->fd, VAR_8, ((void*)0), VAR_1 );
    }
    FUNC_1(VAR_3->mutex);
    return VAR_7;
}
