
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* h_blocktype; void* h_magic; } ;
struct TYPE_9__ {void* s_first; void* s_nr_users; int s_uuid; void* s_sequence; void* s_maxlen; void* s_blocksize; TYPE_1__ s_header; } ;
typedef TYPE_2__ journal_superblock_t ;
typedef TYPE_3__* ext2_filsys ;
typedef int errcode_t ;
typedef scalar_t__ __u32 ;
struct TYPE_11__ {int s_uuid; } ;
struct TYPE_10__ {int blocksize; TYPE_5__* super; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,TYPE_2__**) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

errcode_t FUNC_6(ext2_filsys VAR_6,
        __u32 VAR_7, int VAR_8,
        char **VAR_9)
{
 errcode_t VAR_10;
 journal_superblock_t *VAR_11;

 if (VAR_7 < VAR_3)
  return VAR_0;

 if ((VAR_10 = FUNC_0(VAR_6->blocksize, &VAR_11)))
  return VAR_10;

 FUNC_5 (VAR_11, 0, VAR_6->blocksize);

 VAR_11->s_header.h_magic = FUNC_3(VAR_2);
 if (VAR_8 & VAR_1)
  VAR_11->s_header.h_blocktype = FUNC_3(VAR_4);
 else
  VAR_11->s_header.h_blocktype = FUNC_3(VAR_5);
 VAR_11->s_blocksize = FUNC_3(VAR_6->blocksize);
 VAR_11->s_maxlen = FUNC_3(VAR_7);
 VAR_11->s_nr_users = FUNC_3(1);
 VAR_11->s_first = FUNC_3(1);
 VAR_11->s_sequence = FUNC_3(1);
 FUNC_4(VAR_11->s_uuid, VAR_6->super->s_uuid, sizeof(VAR_6->super->s_uuid));




 if (FUNC_1(VAR_6->super)) {
  VAR_11->s_nr_users = 0;
  VAR_11->s_first = FUNC_3(FUNC_2(VAR_6->blocksize) + 1);
 }

 *VAR_9 = (char *) VAR_11;
 return 0;
}
