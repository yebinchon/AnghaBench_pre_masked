
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_port {int port_no; int host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int ,int,int,int,void*,int ) ;

__attribute__((used)) static int FUNC_1(
 struct ata_port *VAR_2,
 int VAR_3,
 int VAR_4)
{
 return FUNC_0(VAR_2->host, VAR_2->port_no, ((void*)0), 0, VAR_3,
       VAR_4, 1, (void *)VAR_0,
       VAR_1);
}
