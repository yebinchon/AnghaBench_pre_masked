
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef void* uint16_t ;
struct timeval {void* tv_usec; void* tv_sec; } ;
struct TYPE_3__ {void* orig_len; void* incl_len; void* ts_usec; void* ts_sec; } ;
typedef TYPE_1__ pcaprec_hdr_t ;
typedef int fhdr ;
typedef int FILE ;


 int FUNC_0 (TYPE_1__*,int,int,int *) ;
 int FUNC_1 (struct timeval*,int *) ;

void FUNC_2(FILE *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2,
       uint16_t VAR_3, uint16_t VAR_4)
{
 struct timeval VAR_5;
 pcaprec_hdr_t VAR_6;

 if (!VAR_1 || !VAR_2)
 {
  FUNC_1(&VAR_5, ((void*)0));
 }
 else
 {
  VAR_5.tv_sec = *VAR_1;
  VAR_5.tv_usec = *VAR_2;
 }

 VAR_6.ts_sec = VAR_5.tv_sec;
 VAR_6.ts_usec = VAR_5.tv_usec;
 VAR_6.incl_len = VAR_3;
 VAR_6.orig_len = VAR_4;

 FUNC_0(&VAR_6, 1, sizeof(VAR_6), VAR_0);
}
