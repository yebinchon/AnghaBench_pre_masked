
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef struct in_addr uint16_t ;
typedef int tiny ;
struct mg_dns_resource_record {int rtype; int name; int rdata; } ;
struct mg_dns_message {int num_questions; int num_answers; struct mg_dns_resource_record* answers; struct mg_dns_resource_record* questions; } ;
typedef int pkt ;
typedef int name ;
typedef int ina ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 struct mg_dns_resource_record* FUNC_2 (struct mg_dns_message*,int ,struct mg_dns_resource_record*) ;
 int FUNC_3 (struct mg_dns_message*,struct mg_dns_resource_record*,struct in_addr*,int) ;
 int FUNC_4 (struct mg_dns_message*,int *,char*,int) ;
 int FUNC_5 (char const*,int,struct mg_dns_message*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static const char *FUNC_8(void) {
  struct mg_dns_message VAR_2;
  char VAR_3[256];
  const char *VAR_4 = "go.cesanta.com";
  const char *VAR_5 = "ghs.googlehosted.com";
  struct mg_dns_resource_record *VAR_6;
  uint16_t VAR_7;
  struct in_addr VAR_8;
  int VAR_9;
  const unsigned char VAR_10[] = {
      0xa1, 0x00, 0x81, 0x80, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
      0x02, 0x67, 0x6f, 0x07, 0x63, 0x65, 0x73, 0x61, 0x6e, 0x74, 0x61, 0x03,
      0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0xc0, 0x0c, 0x00, 0x05,
      0x00, 0x01, 0x00, 0x00, 0x09, 0x52, 0x00, 0x13, 0x03, 0x67, 0x68, 0x73,
      0x0c, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x68, 0x6f, 0x73, 0x74, 0x65,
      0x64, 0xc0, 0x17, 0xc0, 0x2c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01,
      0x2b, 0x00, 0x04, 0x4a, 0x7d, 0x88, 0x79};

  FUNC_0(FUNC_5((const char *) VAR_10, sizeof(VAR_10), &VAR_2), 0);
  FUNC_0(VAR_2.num_questions, 1);
  FUNC_0(VAR_2.num_answers, 2);

  VAR_6 = &VAR_2.questions[0];
  FUNC_0(FUNC_4(&VAR_2, &VAR_6->name, VAR_3, sizeof(VAR_3)),
            FUNC_6(VAR_4));
  FUNC_0(FUNC_7(VAR_3, VAR_4, FUNC_6(VAR_4)), 0);

  VAR_6 = &VAR_2.answers[0];
  FUNC_0(FUNC_4(&VAR_2, &VAR_6->name, VAR_3, sizeof(VAR_3)),
            FUNC_6(VAR_4));
  FUNC_0(FUNC_7(VAR_3, VAR_4, FUNC_6(VAR_4)), 0);

  FUNC_0(FUNC_4(&VAR_2, &VAR_6->rdata, VAR_3, sizeof(VAR_3)),
            FUNC_6(VAR_5));
  FUNC_0(FUNC_7(VAR_3, VAR_5, FUNC_6(VAR_5)), 0);

  VAR_6 = &VAR_2.answers[1];
  FUNC_0(FUNC_4(&VAR_2, &VAR_6->name, VAR_3, sizeof(VAR_3)),
            FUNC_6(VAR_5));
  FUNC_0(FUNC_7(VAR_3, VAR_5, FUNC_6(VAR_5)), 0);
  FUNC_0(FUNC_3(&VAR_2, VAR_6, &VAR_7, sizeof(VAR_7)), -1);
  FUNC_0(FUNC_3(&VAR_2, VAR_6, &VAR_8, sizeof(VAR_8)), 0);
  FUNC_0(VAR_8.s_addr, FUNC_1("74.125.136.121"));


  VAR_9 = 0;
  VAR_6 = ((void*)0);
  while ((VAR_6 = FUNC_2(&VAR_2, VAR_0, VAR_6))) {
    VAR_9++;
  }
  FUNC_0(VAR_9, 1);

  VAR_9 = 0;
  VAR_6 = ((void*)0);
  while ((VAR_6 = FUNC_2(&VAR_2, VAR_1, VAR_6))) {
    VAR_9++;
  }
  FUNC_0(VAR_9, 1);


  VAR_6 = FUNC_2(&VAR_2, VAR_0, VAR_6);
  VAR_6->rtype = 0xff;
  FUNC_0(FUNC_3(&VAR_2, VAR_6, &VAR_8, sizeof(VAR_8)), -1);

  return ((void*)0);
}
