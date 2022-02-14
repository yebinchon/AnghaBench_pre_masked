
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct packet {int size; scalar_t__ data; int member_0; } ;
struct TYPE_3__ {int TotalSize; scalar_t__ Header; } ;
typedef scalar_t__ PUCHAR ;
typedef int NTSTATUS ;
typedef TYPE_1__ IP_PACKET ;
typedef int IP_INTERFACE ;


 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3() {
    const struct packet VAR_1[] = {
 { 0 }
    };
    int VAR_2;
    IP_INTERFACE VAR_3;
    IP_PACKET VAR_4;
    NTSTATUS VAR_5 = VAR_0;





    for( VAR_2 = 0; FUNC_1(VAR_5) && VAR_2 < VAR_1[VAR_2].size; VAR_2++ ) {
 VAR_4.Header = (PUCHAR)VAR_1[VAR_2].data;
 VAR_4.TotalSize = VAR_1[VAR_2].size;
 FUNC_0( &VAR_3, &VAR_4 );
    }
    FUNC_2(VAR_0, VAR_5);
}
