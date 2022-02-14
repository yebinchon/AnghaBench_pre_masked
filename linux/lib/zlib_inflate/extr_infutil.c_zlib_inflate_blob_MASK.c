
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct z_stream_s {unsigned int avail_in; unsigned int avail_out; struct z_stream_s* workspace; void* next_out; int const* next_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct z_stream_s*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct z_stream_s*,int ) ;
 int FUNC_3 (struct z_stream_s*) ;
 int FUNC_4 (struct z_stream_s*,int ) ;
 int FUNC_5 () ;

int FUNC_6(void *VAR_7, unsigned int VAR_8,
        const void *VAR_9, unsigned int VAR_10)
{
 const u8 *VAR_11 = VAR_9;
 struct z_stream_s *VAR_12;
 int VAR_13;

 VAR_13 = -VAR_1;
 VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  goto gunzip_nomem1;
 VAR_12->workspace = FUNC_1(FUNC_5(), VAR_2);
 if (VAR_12->workspace == ((void*)0))
  goto gunzip_nomem2;




 VAR_12->next_in = VAR_11;
 VAR_12->avail_in = VAR_10;
 VAR_12->next_out = VAR_7;
 VAR_12->avail_out = VAR_8;

 VAR_13 = FUNC_4(VAR_12, -VAR_3);
 if (VAR_13 == VAR_5) {
  VAR_13 = FUNC_2(VAR_12, VAR_4);

  if (VAR_13 == VAR_6)
   VAR_13 = VAR_8 - VAR_12->avail_out;
  else
   VAR_13 = -VAR_0;
  FUNC_3(VAR_12);
 } else
  VAR_13 = -VAR_0;

 FUNC_0(VAR_12->workspace);
gunzip_nomem2:
 FUNC_0(VAR_12);
gunzip_nomem1:
 return VAR_13;
}
