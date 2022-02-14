
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_unknown_node {int dummy; } ;
struct jffs2_raw_dirent {char type; int ino; int pino; scalar_t__ nsize; int name; void* node_crc; scalar_t__ mctime; scalar_t__ version; void* hdr_crc; scalar_t__ totlen; void* name_crc; int nodetype; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ,void*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_7, const char VAR_8, int VAR_9)
{
 struct jffs2_raw_dirent *VAR_10;

 if (VAR_6 - VAR_3 < sizeof(struct jffs2_raw_dirent) + FUNC_5(VAR_7))
  FUNC_3(VAR_3);

 FUNC_4();
 VAR_4++;
 FUNC_2(VAR_2 + VAR_6, 0, sizeof(struct jffs2_raw_dirent));
 VAR_10 = (struct jffs2_raw_dirent *) (VAR_2 + VAR_6);

 VAR_10->magic = VAR_0;
 VAR_10->nodetype = VAR_1;
 VAR_10->type = VAR_8;
 VAR_10->name_crc = FUNC_0(0, VAR_7, FUNC_5(VAR_7));
 VAR_10->ino = VAR_4++;
 VAR_10->pino = VAR_9;
 VAR_10->totlen = sizeof(*VAR_10) + FUNC_5(VAR_7);
 VAR_10->hdr_crc = FUNC_0(0, (void *) VAR_10, sizeof(struct jffs2_unknown_node) - 4);
 VAR_10->version = VAR_5++;
 VAR_10->mctime = 0;
 VAR_10->nsize = FUNC_5(VAR_7);
 VAR_10->node_crc = FUNC_0(0, (void *) VAR_10, sizeof(*VAR_10) - 8);
 FUNC_1(VAR_10->name, VAR_7, FUNC_5(VAR_7));

 VAR_6 += sizeof(struct jffs2_raw_dirent) + VAR_10->nsize;
 FUNC_3(4);

 return VAR_10->ino;
}
