
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ hInternet; } ;
struct TYPE_13__ {scalar_t__ read_size; TYPE_3__ hdr; TYPE_2__* session; int read_section; } ;
typedef TYPE_4__ http_request_t ;
struct TYPE_10__ {int dwInternalFlags; } ;
struct TYPE_11__ {TYPE_1__ hdr; } ;
typedef int DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_4__*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int ,scalar_t__*) ;
 int FUNC_6 (TYPE_4__*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(http_request_t *VAR_4)
{
    DWORD VAR_5, VAR_6 = 0;

    FUNC_2("%p\n", VAR_4);

    FUNC_0( &VAR_4->read_section );

    VAR_5 = FUNC_5(VAR_4, VAR_1, &VAR_6);
    if(VAR_5 == VAR_0)
        VAR_6 += VAR_4->read_size;

    FUNC_1( &VAR_4->read_section );

    if(VAR_5 != VAR_3 && (VAR_5 != VAR_0 || !VAR_6)) {
        FUNC_3("res %u read %u, closing connection\n", VAR_5, VAR_6);
        FUNC_4(VAR_4, VAR_1);
    }

    if(VAR_5 != VAR_0 && VAR_5 != VAR_3) {
        FUNC_6(VAR_4, 0, VAR_5);
        return;
    }

    FUNC_6(VAR_4, VAR_4->session->hdr.dwInternalFlags & VAR_2 ? (DWORD_PTR)VAR_4->hdr.hInternet : 1, 0);
}
