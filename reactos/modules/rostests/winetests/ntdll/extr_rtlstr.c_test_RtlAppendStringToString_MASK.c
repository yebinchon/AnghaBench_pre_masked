
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dest_Length; scalar_t__ dest_MaximumLength; size_t dest_buf_size; scalar_t__ src_Length; scalar_t__ src_MaximumLength; size_t src_buf_size; scalar_t__ result; scalar_t__ res_Length; scalar_t__ res_MaximumLength; scalar_t__ res_buf; int res_buf_size; int * src_buf; int * dest_buf; } ;
struct TYPE_5__ {scalar_t__ Length; scalar_t__ MaximumLength; char* Buffer; } ;
typedef TYPE_1__ STRING ;
typedef scalar_t__ NTSTATUS ;
typedef char CHAR ;


 unsigned int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int,char*,unsigned int,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
    CHAR VAR_2[257];
    CHAR VAR_3[257];
    STRING VAR_4;
    STRING VAR_5;
    NTSTATUS VAR_6;
    unsigned int VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
 VAR_4.Length = VAR_1[VAR_7].dest_Length;
 VAR_4.MaximumLength = VAR_1[VAR_7].dest_MaximumLength;
 if (VAR_1[VAR_7].dest_buf != ((void*)0)) {
     FUNC_1(VAR_2, VAR_1[VAR_7].dest_buf, VAR_1[VAR_7].dest_buf_size);
     VAR_2[VAR_1[VAR_7].dest_buf_size] = '\0';
     VAR_4.Buffer = VAR_2;
 } else {
     VAR_4.Buffer = ((void*)0);
 }
 VAR_5.Length = VAR_1[VAR_7].src_Length;
 VAR_5.MaximumLength = VAR_1[VAR_7].src_MaximumLength;
 if (VAR_1[VAR_7].src_buf != ((void*)0)) {
     FUNC_1(VAR_3, VAR_1[VAR_7].src_buf, VAR_1[VAR_7].src_buf_size);
     VAR_3[VAR_1[VAR_7].src_buf_size] = '\0';
     VAR_5.Buffer = VAR_3;
 } else {
     VAR_5.Buffer = ((void*)0);
 }
 VAR_6 = FUNC_3(&VAR_4, &VAR_5);
 FUNC_2(VAR_6 == VAR_1[VAR_7].result,
           "(test %d): RtlAppendStringToString(dest, src) has result %x, expected %x\n",
    VAR_7, VAR_6, VAR_1[VAR_7].result);
 FUNC_2(VAR_4.Length == VAR_1[VAR_7].res_Length,
    "(test %d): RtlAppendStringToString(dest, src) dest has Length %d, expected %d\n",
    VAR_7, VAR_4.Length, VAR_1[VAR_7].res_Length);
 FUNC_2(VAR_4.MaximumLength == VAR_1[VAR_7].res_MaximumLength,
    "(test %d): RtlAppendStringToString(dest, src) dest has MaximumLength %d, expected %d\n",
    VAR_7, VAR_4.MaximumLength, VAR_1[VAR_7].res_MaximumLength);
 if (VAR_4.Buffer == VAR_2) {
     FUNC_2(FUNC_0(VAR_2, VAR_1[VAR_7].res_buf, VAR_1[VAR_7].res_buf_size) == 0,
        "(test %d): RtlAppendStringToString(dest, src) has dest \"%s\" expected \"%s\"\n",
        VAR_7, VAR_2, VAR_1[VAR_7].res_buf);
 } else {
     FUNC_2(VAR_4.Buffer == VAR_1[VAR_7].res_buf,
        "(test %d): RtlAppendStringToString(dest, src) dest has Buffer %p expected %p\n",
        VAR_7, VAR_4.Buffer, VAR_1[VAR_7].res_buf);
 }
    }
}
