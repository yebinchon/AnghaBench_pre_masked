
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fcp_transaction {scalar_t__* response_buffer; unsigned int response_match_bytes; } ;



__attribute__((used)) static bool FUNC_0(struct fcp_transaction *VAR_0,
     const void *VAR_1, size_t VAR_2)
{
 const u8 *VAR_3, *VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_3 = VAR_1;
 VAR_4 = VAR_0->response_buffer;
 VAR_5 = VAR_0->response_match_bytes;

 for (VAR_6 = 0; ; ++VAR_6) {
  if ((VAR_5 & 1) && VAR_3[VAR_6] != VAR_4[VAR_6])
   return 0;
  VAR_5 >>= 1;
  if (!VAR_5)
   return 1;
  if (--VAR_2 == 0)
   return 0;
 }
}
