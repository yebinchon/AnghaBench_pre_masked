
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32_t ;
struct test_tcp_counters {char* expected_data; size_t recved_bytes; size_t expected_data_len; } ;
struct pbuf {size_t tot_len; char* payload; size_t len; struct pbuf* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct test_tcp_counters* VAR_0, struct pbuf* VAR_1)
{
  struct pbuf* VAR_2;
  u32_t VAR_3, VAR_4;
  if(VAR_0->expected_data == ((void*)0)) {

    return;
  }
  FUNC_1(VAR_0->recved_bytes + VAR_1->tot_len <= VAR_0->expected_data_len);
  VAR_4 = VAR_0->recved_bytes;
  for(VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
    char *VAR_5 = VAR_2->payload;
    for(VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
      FUNC_1(VAR_5[VAR_3] == VAR_0->expected_data[VAR_4]);
      VAR_4++;
    }
  }
  FUNC_0(VAR_4 == VAR_0->recved_bytes + VAR_1->tot_len);
}
