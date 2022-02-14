
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkey_malloc_record {long size; int prot; void* ptr; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,int,struct pkey_malloc_record*,void*,long) ;
 int FUNC_2 (struct pkey_malloc_record*,int ,int) ;
 long VAR_0 ;
 int FUNC_3 (int ) ;
 struct pkey_malloc_record* VAR_1 ;
 struct pkey_malloc_record* VAR_2 ;
 struct pkey_malloc_record* FUNC_4 (struct pkey_malloc_record*,size_t) ;

void FUNC_5(void *VAR_3, long VAR_4, int VAR_5)
{
 long VAR_6;
 struct pkey_malloc_record *VAR_7 = ((void*)0);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = &VAR_2[VAR_6];

  if (VAR_7)
   break;
 }
 if (!VAR_7) {

  size_t VAR_8 = VAR_0;
  size_t VAR_9 = (VAR_0 * 2 + 1);
  size_t VAR_10 = VAR_9 * sizeof(struct pkey_malloc_record);
  FUNC_0("new_nr_records: %zd\n", VAR_9);
  FUNC_0("new_size: %zd\n", VAR_10);
  VAR_2 = FUNC_4(VAR_2, VAR_10);
  FUNC_3(VAR_2 != ((void*)0));
  VAR_7 = &VAR_2[VAR_0];




  for (VAR_6 = 0; VAR_6 < VAR_9 - VAR_8; VAR_6++)
   FUNC_2(VAR_7 + VAR_6, 0, sizeof(*VAR_7));
 }
 FUNC_1("filling malloc record[%d/%p]: {%p, %ld}\n",
  (int)(VAR_7 - VAR_2), VAR_7, VAR_3, VAR_4);
 VAR_7->ptr = VAR_3;
 VAR_7->size = VAR_4;
 VAR_7->prot = VAR_5;
 VAR_1 = VAR_7;
 VAR_0++;
}
