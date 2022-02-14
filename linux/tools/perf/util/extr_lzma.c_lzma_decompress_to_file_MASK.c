
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {scalar_t__ avail_in; int avail_out; int * next_out; int * next_in; } ;
typedef TYPE_1__ lzma_stream ;
typedef scalar_t__ lzma_ret ;
typedef int lzma_action ;
typedef int buf_out ;
typedef int buf_in ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int *,int,int,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,char const*,...) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int *,scalar_t__) ;

int FUNC_11(const char *VAR_9, int VAR_10)
{
 lzma_action VAR_11 = VAR_4;
 lzma_stream VAR_12 = VAR_6;
 lzma_ret VAR_13;
 int VAR_14 = -1;

 u8 VAR_15[VAR_0];
 u8 VAR_16[VAR_0];
 FILE *VAR_17;

 VAR_17 = FUNC_3(VAR_9, "rb");
 if (!VAR_17) {
  FUNC_8("lzma: fopen failed on %s: '%s'\n",
         VAR_9, FUNC_9(VAR_8));
  return -1;
 }

 VAR_13 = FUNC_6(&VAR_12, VAR_7, VAR_1);
 if (VAR_13 != VAR_3) {
  FUNC_8("lzma: lzma_stream_decoder failed %s (%d)\n",
   FUNC_7(VAR_13), VAR_13);
  goto err_fclose;
 }

 VAR_12.next_in = ((void*)0);
 VAR_12.avail_in = 0;
 VAR_12.next_out = VAR_16;
 VAR_12.avail_out = sizeof(VAR_16);

 while (1) {
  if (VAR_12.avail_in == 0 && !FUNC_1(VAR_17)) {
   VAR_12.next_in = VAR_15;
   VAR_12.avail_in = FUNC_4(VAR_15, 1, sizeof(VAR_15), VAR_17);

   if (FUNC_2(VAR_17)) {
    FUNC_8("lzma: read error: %s\n", FUNC_9(VAR_8));
    goto err_fclose;
   }

   if (FUNC_1(VAR_17))
    VAR_11 = VAR_2;
  }

  VAR_13 = FUNC_5(&VAR_12, VAR_11);

  if (VAR_12.avail_out == 0 || VAR_13 == VAR_5) {
   ssize_t VAR_18 = sizeof(VAR_16) - VAR_12.avail_out;

   if (FUNC_10(VAR_10, VAR_16, VAR_18) != VAR_18) {
    FUNC_8("lzma: write error: %s\n", FUNC_9(VAR_8));
    goto err_fclose;
   }

   VAR_12.next_out = VAR_16;
   VAR_12.avail_out = sizeof(VAR_16);
  }

  if (VAR_13 != VAR_3) {
   if (VAR_13 == VAR_5)
    break;

   FUNC_8("lzma: failed %s\n", FUNC_7(VAR_13));
   goto err_fclose;
  }
 }

 VAR_14 = 0;
err_fclose:
 FUNC_0(VAR_17);
 return VAR_14;
}
