
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_3__ {TYPE_2__* device; } ;
struct ata_port {TYPE_1__ link; int port_no; int host; } ;
struct TYPE_4__ {scalar_t__ class; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct ata_port*) ;
 int FUNC_3 (struct ata_port*,int,int) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ata_port*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ata_port *VAR_7)
{
 uint VAR_8;


 FUNC_4(VAR_7->host, !VAR_7->port_no, 0);


 FUNC_3(VAR_7, 0x0C, 0x30003);


 FUNC_5(VAR_7, VAR_4, ~0);
 FUNC_5(VAR_7, VAR_5, 0x03feffff);
 FUNC_5(VAR_7, VAR_3, ~0 & ~(1 << 26) & ~(1 << 16));


 FUNC_2(VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  if (VAR_7->link.device[VAR_8].class == VAR_0) {
   FUNC_6(&VAR_7->link, ((void*)0), VAR_6 + VAR_2);
   FUNC_1(&(VAR_7->link.device[VAR_8]));
  }
 }


 FUNC_5(VAR_7, VAR_4, ~0);
 FUNC_0("done\n");
}
