
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtmp_stream {int sent_headers; } ;


 int FUNC_0 (struct rtmp_stream*,int ,int*) ;
 int FUNC_1 (struct rtmp_stream*) ;

__attribute__((used)) static inline bool FUNC_2(struct rtmp_stream *VAR_0)
{
 VAR_0->sent_headers = 1;
 size_t VAR_1 = 0;
 bool VAR_2 = 1;

 if (!FUNC_0(VAR_0, VAR_1++, &VAR_2))
  return 0;
 if (!FUNC_1(VAR_0))
  return 0;

 while (VAR_2) {
  if (!FUNC_0(VAR_0, VAR_1++, &VAR_2))
   return 0;
 }

 return 1;
}
