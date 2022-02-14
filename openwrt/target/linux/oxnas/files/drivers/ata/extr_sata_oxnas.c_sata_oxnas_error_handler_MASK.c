
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int host; int port_no; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct ata_port*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ata_port*) ;
 int FUNC_4 (struct ata_port*) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_0)
{
 FUNC_0("Enter port_no %d\n", VAR_0->port_no);
 FUNC_3(VAR_0);


 FUNC_2(VAR_0->host);

 FUNC_1(VAR_0);

 FUNC_4(VAR_0);
}
