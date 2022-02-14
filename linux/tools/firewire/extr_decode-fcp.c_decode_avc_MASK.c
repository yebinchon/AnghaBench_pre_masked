
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct link_transaction {TYPE_3__* request; } ;
struct avc_opcode_info {char* name; TYPE_4__* fields; } ;
struct avc_frame {size_t opcode; size_t ctype; size_t subunit_type; int subunit_id; } ;
typedef int buffer ;
struct TYPE_8__ {char* name; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__ write_block; } ;
struct TYPE_7__ {TYPE_2__ packet; } ;


 char** VAR_0 ;
 struct avc_opcode_info* VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,char*,size_t) ;
 char** VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct link_transaction *VAR_3)
{
 struct avc_frame *VAR_4 =
     (struct avc_frame *) VAR_3->request->packet.write_block.data;
 const struct avc_opcode_info *VAR_5;
 const char *VAR_6;
 char VAR_7[32];
 int VAR_8;

 VAR_5 = &VAR_1[VAR_4->opcode];
 if (VAR_5->name == ((void*)0)) {
  FUNC_1(VAR_7, sizeof(VAR_7),
    "(unknown opcode 0x%02x)", VAR_4->opcode);
  VAR_6 = VAR_7;
 } else {
  VAR_6 = VAR_5->name;
 }

 FUNC_0("av/c %s, subunit_type=%s, subunit_id=%d, opcode=%s",
     VAR_0[VAR_4->ctype], VAR_2[VAR_4->subunit_type],
     VAR_4->subunit_id, VAR_6);

 for (VAR_8 = 0; VAR_5->fields[VAR_8].name != ((void*)0); VAR_8++)
  FUNC_0(", %s", VAR_5->fields[VAR_8].name);

 FUNC_0("\n");
}
