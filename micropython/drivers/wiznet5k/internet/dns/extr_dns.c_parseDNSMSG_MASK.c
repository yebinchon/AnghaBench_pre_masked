
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct dhdr {int qr; int opcode; int aa; int tc; int rd; int ra; int rcode; int qdcount; int ancount; int nscount; int arcount; void* id; } ;
typedef int int8_t ;


 int * FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (struct dhdr*,int ,int) ;
 int FUNC_4 (char*) ;

int8_t FUNC_5(struct dhdr * VAR_0, uint8_t * VAR_1, uint8_t * VAR_2)
{
 uint16_t VAR_3;
 uint16_t VAR_4;
 uint8_t * VAR_5;
 uint8_t * VAR_6;

 VAR_5 = VAR_1;
 FUNC_3(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->id = FUNC_2(&VAR_5[0]);
 VAR_3 = FUNC_2(&VAR_5[2]);
 if (VAR_3 & 0x8000) VAR_0->qr = 1;

 VAR_0->opcode = (VAR_3 >> 11) & 0xf;

 if (VAR_3 & 0x0400) VAR_0->aa = 1;
 if (VAR_3 & 0x0200) VAR_0->tc = 1;
 if (VAR_3 & 0x0100) VAR_0->rd = 1;
 if (VAR_3 & 0x0080) VAR_0->ra = 1;

 VAR_0->rcode = VAR_3 & 0xf;
 VAR_0->qdcount = FUNC_2(&VAR_5[4]);
 VAR_0->ancount = FUNC_2(&VAR_5[6]);
 VAR_0->nscount = FUNC_2(&VAR_5[8]);
 VAR_0->arcount = FUNC_2(&VAR_5[10]);



 VAR_6 = &VAR_5[12];


 for (VAR_4 = 0; VAR_4 < VAR_0->qdcount; VAR_4++)
 {
  VAR_6 = FUNC_1(VAR_5, VAR_6);
  if(!VAR_6)
  {



   return -1;
  }
 }


 for (VAR_4 = 0; VAR_4 < VAR_0->ancount; VAR_4++)
 {
  VAR_6 = FUNC_0(VAR_5, VAR_6, VAR_2);
  if(!VAR_6)
  {



   return -1;
  }

 }


 for (VAR_4 = 0; VAR_4 < VAR_0->nscount; VAR_4++)
 {
  ;
 }


 for (VAR_4 = 0; VAR_4 < VAR_0->arcount; VAR_4++)
 {
  ;
 }

 if(VAR_0->rcode == 0) return 1;
 else return 0;
}
