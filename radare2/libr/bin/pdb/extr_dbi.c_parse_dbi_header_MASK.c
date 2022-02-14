
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut32 ;
typedef int ut16 ;
typedef int st16 ;
struct TYPE_3__ {int resvd; int machine; int flags; int ecinfo_size; int dbghdr_size; int mfc_index; int tsmap_size; int filinf_size; int secmap_size; int seccon_size; int module_size; int pdbver2; int symrecStream; int pdbver; int pssymStream; int vers; int gssymStream; int age; int version; int magic; } ;
typedef TYPE_1__ SDBIHeader ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (int *,int,char*) ;

__attribute__((used)) static void FUNC_1(SDBIHeader *VAR_0, R_STREAM_FILE *VAR_1) {
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->magic);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->version);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->age);
 FUNC_0 (VAR_1, sizeof (ut16), (char *)&VAR_0->gssymStream);
 FUNC_0 (VAR_1, sizeof (ut16), (char *)&VAR_0->vers);
 FUNC_0 (VAR_1, sizeof (st16), (char *)&VAR_0->pssymStream);
 FUNC_0 (VAR_1, sizeof (ut16), (char *)&VAR_0->pdbver);
 FUNC_0 (VAR_1, sizeof (st16), (char *)&VAR_0->symrecStream);
 FUNC_0 (VAR_1, sizeof (ut16), (char *)&VAR_0->pdbver2);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->module_size);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->seccon_size);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->secmap_size);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->filinf_size);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->tsmap_size);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->mfc_index);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->dbghdr_size);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->ecinfo_size);
 FUNC_0 (VAR_1, sizeof (ut16), (char *)&VAR_0->flags);
 FUNC_0 (VAR_1, 2, (char *)&VAR_0->machine);
 FUNC_0 (VAR_1, sizeof (ut32), (char *)&VAR_0->resvd);
}
