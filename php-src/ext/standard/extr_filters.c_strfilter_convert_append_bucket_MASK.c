
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int php_stream_filter ;
typedef int php_stream_bucket_brigade ;
typedef int php_stream_bucket ;
typedef int php_stream ;
struct TYPE_3__ {size_t stub_len; char* stub; int filtername; int cd; } ;
typedef TYPE_1__ php_convert_filter ;
typedef int php_conv_err_t ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,int) ;
 char* FUNC_3 (size_t,int) ;
 char* FUNC_4 (char*,size_t,int) ;
 int FUNC_5 (int ,char const**,size_t*,char**,size_t*) ;
 int FUNC_6 (int *,int ,char*,int ) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int *,char*,size_t,int,int) ;

__attribute__((used)) static int FUNC_9(
  php_convert_filter *VAR_3,
  php_stream *VAR_4, php_stream_filter *VAR_5,
  php_stream_bucket_brigade *VAR_6,
  const char *VAR_7, size_t VAR_8, size_t *VAR_9,
  int VAR_10)
{
 php_conv_err_t VAR_11;
 php_stream_bucket *VAR_12;
 char *VAR_13 = ((void*)0);
 size_t VAR_14;
 char *VAR_15;
 const char *VAR_16;
 size_t VAR_17, VAR_18, VAR_19;
 size_t VAR_20;

 if (VAR_7 == ((void*)0)) {
  VAR_20 = 64;
  VAR_18 = 1;
 } else {
  VAR_20 = VAR_8;
  VAR_18 = VAR_8;
 }

 VAR_14 = VAR_17 = VAR_20;
 VAR_13 = FUNC_3(VAR_14, VAR_10);

 VAR_15 = VAR_13;

 if (VAR_3->stub_len > 0) {
  VAR_16 = VAR_3->stub;
  VAR_19 = VAR_3->stub_len;

  while (VAR_19 > 0) {
   VAR_11 = FUNC_5(VAR_3->cd, &VAR_16, &VAR_19, &VAR_15, &VAR_17);

   switch (VAR_11) {
    case 132:
     FUNC_6(((void*)0), VAR_0, "stream filter (%s): invalid byte sequence", VAR_3->filtername);
     goto out_failure;

    case 131:
     if (VAR_7 != ((void*)0)) {
      if (VAR_18 > 0) {
       if (VAR_3->stub_len >= sizeof(VAR_3->stub)) {
        FUNC_6(((void*)0), VAR_0, "stream filter (%s): insufficient buffer", VAR_3->filtername);
        goto out_failure;
       }
       VAR_3->stub[VAR_3->stub_len++] = *(VAR_7++);
       VAR_18--;
       VAR_16 = VAR_3->stub;
       VAR_19 = VAR_3->stub_len;
      } else {
       VAR_19 = 0;
       break;
      }
     }
     break;

    case 129:
     FUNC_6(((void*)0), VAR_0, "stream filter (%s): unexpected end of stream", VAR_3->filtername);
     goto out_failure;

    case 130: {
     char *VAR_21;
     size_t VAR_22;

     VAR_22 = VAR_14 << 1;

     if (VAR_22 < VAR_14) {

      if (((void*)0) == (VAR_12 = FUNC_8(VAR_4, VAR_13, (VAR_14 - VAR_17), 1, VAR_10))) {
       goto out_failure;
      }

      FUNC_7(VAR_6, VAR_12);

      VAR_14 = VAR_17 = VAR_20;
      VAR_13 = FUNC_3(VAR_14, VAR_10);
      VAR_15 = VAR_13;
     } else {
      VAR_21 = FUNC_4(VAR_13, VAR_22, VAR_10);
      VAR_15 = VAR_21 + (VAR_15 - VAR_13);
      VAR_17 += (VAR_22 - VAR_14);
      VAR_13 = VAR_21;
      VAR_14 = VAR_22;
     }
    } break;

    case 128:
     FUNC_6(((void*)0), VAR_0, "stream filter (%s): unknown error", VAR_3->filtername);
     goto out_failure;

    default:
     break;
   }
  }
  FUNC_1(VAR_3->stub, VAR_16, VAR_19);
  VAR_3->stub_len = VAR_19;
 }

 while (VAR_18 > 0) {
  VAR_11 = ((VAR_7 == ((void*)0) ? FUNC_5(VAR_3->cd, ((void*)0), ((void*)0), &VAR_15, &VAR_17):
    FUNC_5(VAR_3->cd, &VAR_7, &VAR_18, &VAR_15, &VAR_17)));
  switch (VAR_11) {
   case 132:
    FUNC_6(((void*)0), VAR_0, "stream filter (%s): invalid byte sequence", VAR_3->filtername);
    goto out_failure;

   case 131:
    if (VAR_7 != ((void*)0)) {
     if (VAR_18 > sizeof(VAR_3->stub)) {
      FUNC_6(((void*)0), VAR_0, "stream filter (%s): insufficient buffer", VAR_3->filtername);
      goto out_failure;
     }
     FUNC_0(VAR_3->stub, VAR_7, VAR_18);
     VAR_3->stub_len = VAR_18;
     VAR_7 += VAR_18;
     VAR_18 = 0;
    } else {
     FUNC_6(((void*)0), VAR_0, "stream filter (%s): unexpected octet values", VAR_3->filtername);
     goto out_failure;
    }
    break;

   case 130: {
    char *VAR_23;
    size_t VAR_24;

    VAR_24 = VAR_14 << 1;

    if (VAR_24 < VAR_14) {

     if (((void*)0) == (VAR_12 = FUNC_8(VAR_4, VAR_13, (VAR_14 - VAR_17), 1, VAR_10))) {
      goto out_failure;
     }

     FUNC_7(VAR_6, VAR_12);

     VAR_14 = VAR_17 = VAR_20;
     VAR_13 = FUNC_3(VAR_14, VAR_10);
     VAR_15 = VAR_13;
    } else {
     VAR_23 = FUNC_4(VAR_13, VAR_24, VAR_10);
     VAR_15 = VAR_23 + (VAR_15 - VAR_13);
     VAR_17 += (VAR_24 - VAR_14);
     VAR_13 = VAR_23;
     VAR_14 = VAR_24;
    }
   } break;

   case 128:
    FUNC_6(((void*)0), VAR_0, "stream filter (%s): unknown error", VAR_3->filtername);
    goto out_failure;

   default:
    if (VAR_7 == ((void*)0)) {
     VAR_18 = 0;
    }
    break;
  }
 }

 if (VAR_14 > VAR_17) {
  if (((void*)0) == (VAR_12 = FUNC_8(VAR_4, VAR_13, (VAR_14 - VAR_17), 1, VAR_10))) {
   goto out_failure;
  }
  FUNC_7(VAR_6, VAR_12);
 } else {
  FUNC_2(VAR_13, VAR_10);
 }
 *VAR_9 += VAR_8 - VAR_18;

 return VAR_2;

out_failure:
 FUNC_2(VAR_13, VAR_10);
 return VAR_1;
}
