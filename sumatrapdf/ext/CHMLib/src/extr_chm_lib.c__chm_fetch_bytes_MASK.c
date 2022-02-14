
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmFile {scalar_t__ fd; int mutex; } ;
typedef int UInt64 ;
typedef int UChar ;
typedef int Int64 ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int,int*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int,int*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__,long,int ) ;
 int FUNC_5 (scalar_t__,int,int ) ;
 int FUNC_6 (scalar_t__,int *,long,unsigned int) ;
 int FUNC_7 (scalar_t__,int *,long,int) ;
 int FUNC_8 (scalar_t__,int *,int) ;

__attribute__((used)) static Int64 FUNC_9(struct chmFile *VAR_6,
                              UChar *VAR_7,
                              UInt64 VAR_8,
                              Int64 VAR_9)
{
    Int64 VAR_10=0, VAR_11=0;
    if (VAR_6->fd == VAR_0)
        return VAR_10;

    FUNC_0(VAR_6->mutex);
    VAR_11 = FUNC_4(VAR_6->fd, 0, VAR_3);
    FUNC_4(VAR_6->fd, (long)VAR_8, VAR_4);
    VAR_10 = FUNC_8(VAR_6->fd, VAR_7, VAR_9);
    FUNC_4(VAR_6->fd, (long)VAR_11, VAR_4);



    FUNC_1(VAR_6->mutex);
    return VAR_10;
}
