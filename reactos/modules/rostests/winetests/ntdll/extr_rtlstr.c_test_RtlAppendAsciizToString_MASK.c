
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dest_Length; scalar_t__ dest_MaximumLength; size_t dest_buf_size; scalar_t__ result; scalar_t__ res_Length; scalar_t__ res_MaximumLength; scalar_t__ res_buf; int res_buf_size; int src; int * dest_buf; } ;
struct TYPE_4__ {scalar_t__ Length; scalar_t__ MaximumLength; char* Buffer; } ;
typedef TYPE_1__ STRING ;
typedef scalar_t__ NTSTATUS ;
typedef char CHAR ;


 unsigned int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int,char*,unsigned int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
    CHAR VAR_2[257];
    STRING VAR_3;
    NTSTATUS VAR_4;
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
 VAR_3.Length = VAR_1[VAR_5].dest_Length;
 VAR_3.MaximumLength = VAR_1[VAR_5].dest_MaximumLength;
 if (VAR_1[VAR_5].dest_buf != ((void*)0)) {
     FUNC_1(VAR_2, VAR_1[VAR_5].dest_buf, VAR_1[VAR_5].dest_buf_size);
     VAR_2[VAR_1[VAR_5].dest_buf_size] = '\0';
     VAR_3.Buffer = VAR_2;
 } else {
     VAR_3.Buffer = ((void*)0);
 }
 VAR_4 = FUNC_3(&VAR_3, VAR_1[VAR_5].src);
 FUNC_2(VAR_4 == VAR_1[VAR_5].result,
           "(test %d): RtlAppendAsciizToString(dest, src) has result %x, expected %x\n",
    VAR_5, VAR_4, VAR_1[VAR_5].result);
 FUNC_2(VAR_3.Length == VAR_1[VAR_5].res_Length,
    "(test %d): RtlAppendAsciizToString(dest, src) dest has Length %d, expected %d\n",
    VAR_5, VAR_3.Length, VAR_1[VAR_5].res_Length);
 FUNC_2(VAR_3.MaximumLength == VAR_1[VAR_5].res_MaximumLength,
    "(test %d): RtlAppendAsciizToString(dest, src) dest has MaximumLength %d, expected %d\n",
    VAR_5, VAR_3.MaximumLength, VAR_1[VAR_5].res_MaximumLength);
 if (VAR_3.Buffer == VAR_2) {
     FUNC_2(FUNC_0(VAR_2, VAR_1[VAR_5].res_buf, VAR_1[VAR_5].res_buf_size) == 0,
        "(test %d): RtlAppendAsciizToString(dest, src) has dest \"%s\" expected \"%s\"\n",
        VAR_5, VAR_2, VAR_1[VAR_5].res_buf);
 } else {
     FUNC_2(VAR_3.Buffer == VAR_1[VAR_5].res_buf,
        "(test %d): RtlAppendAsciizToString(dest, src) dest has Buffer %p expected %p\n",
        VAR_5, VAR_3.Buffer, VAR_1[VAR_5].res_buf);
 }
    }
}
