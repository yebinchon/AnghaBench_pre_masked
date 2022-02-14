
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lsapi_child_status ;
struct TYPE_2__ {int m_iMaxChildren; int m_iExtraChildren; int * m_pChildrenStatusEnd; int * m_pChildrenStatusCur; int * m_pChildrenStatus; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int,int,int,int,int ) ;
 int FUNC_2 (char*) ;
 int* VAR_6 ;
 size_t* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;

__attribute__((used)) static int FUNC_3(void)
{
    int VAR_10 = 4096;
    int VAR_11 = VAR_5->m_iMaxChildren
                        + VAR_5->m_iExtraChildren;

    char * VAR_12;
    VAR_10 = VAR_11 * sizeof( lsapi_child_status ) * 2 + 3 * sizeof(int);
    VAR_10 = (VAR_10 + 4095) / 4096 * 4096;
    VAR_12 =( char*) FUNC_1( ((void*)0), VAR_10, VAR_3 | VAR_4,
        VAR_0 | VAR_2, -1, 0 );
    if ( VAR_12 == VAR_1 )
    {
        FUNC_2( "Anonymous mmap() failed" );
        return -1;
    }
    FUNC_0( VAR_12, 0, VAR_10 );
    VAR_5->m_pChildrenStatus = (lsapi_child_status *)VAR_12;
    VAR_5->m_pChildrenStatusCur = (lsapi_child_status *)VAR_12;
    VAR_5->m_pChildrenStatusEnd = (lsapi_child_status *)VAR_12 + VAR_11;
    VAR_8 = (int *)VAR_5->m_pChildrenStatusEnd;
    VAR_6 = VAR_8 + 1;
    VAR_9 = VAR_6 + 1;
    VAR_7 = (size_t *)(VAR_9 + 1);
    return 0;
}
