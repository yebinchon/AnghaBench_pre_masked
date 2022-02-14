
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int* e_ident; int e_ehsize; int e_type; int e_machine; int e_phentsize; int e_phnum; int e_shentsize; int e_shnum; int e_shstrndx; void* e_shoff; void* e_phoff; void* e_entry; void* e_flags; void* e_version; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct elfhdr*,int) ;
 void* FUNC_1 (struct elfhdr*,void*) ;
 void* FUNC_2 (struct elfhdr*,void*) ;
 scalar_t__ FUNC_3 (struct elfhdr*,size_t) ;
 int FUNC_4 (struct elfhdr*) ;
 int FUNC_5 (int*,char const*,int) ;
 int FUNC_6 (struct elfhdr*,int ,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_7, size_t VAR_8, struct elfhdr *VAR_9)
{
 struct elfhdr *VAR_10;

 if (VAR_8 < sizeof(*VAR_10)) {
  FUNC_7("Buffer is too small to hold ELF header.\n");
  return -VAR_6;
 }

 FUNC_6(VAR_9, 0, sizeof(*VAR_9));
 FUNC_5(VAR_9->e_ident, VAR_7, sizeof(VAR_9->e_ident));
 if (!FUNC_4(VAR_9)) {
  FUNC_7("No ELF header magic.\n");
  return -VAR_6;
 }

 if (VAR_9->e_ident[VAR_1] != VAR_5) {
  FUNC_7("Not a supported ELF class.\n");
  return -VAR_6;
 } else if (VAR_9->e_ident[VAR_2] != VAR_3 &&
  VAR_9->e_ident[VAR_2] != VAR_4) {
  FUNC_7("Not a supported ELF data format.\n");
  return -VAR_6;
 }

 VAR_10 = (struct elfhdr *) VAR_7;
 if (FUNC_0(VAR_9, VAR_10->e_ehsize) != sizeof(*VAR_10)) {
  FUNC_7("Bad ELF header size.\n");
  return -VAR_6;
 }

 VAR_9->e_type = FUNC_0(VAR_9, VAR_10->e_type);
 VAR_9->e_machine = FUNC_0(VAR_9, VAR_10->e_machine);
 VAR_9->e_version = FUNC_1(VAR_9, VAR_10->e_version);
 VAR_9->e_flags = FUNC_1(VAR_9, VAR_10->e_flags);
 VAR_9->e_phentsize = FUNC_0(VAR_9, VAR_10->e_phentsize);
 VAR_9->e_phnum = FUNC_0(VAR_9, VAR_10->e_phnum);
 VAR_9->e_shentsize = FUNC_0(VAR_9, VAR_10->e_shentsize);
 VAR_9->e_shnum = FUNC_0(VAR_9, VAR_10->e_shnum);
 VAR_9->e_shstrndx = FUNC_0(VAR_9, VAR_10->e_shstrndx);

 switch (VAR_9->e_ident[VAR_1]) {
 case 128:
  VAR_9->e_entry = FUNC_2(VAR_9, VAR_10->e_entry);
  VAR_9->e_phoff = FUNC_2(VAR_9, VAR_10->e_phoff);
  VAR_9->e_shoff = FUNC_2(VAR_9, VAR_10->e_shoff);
  break;

 case 129:
  VAR_9->e_entry = FUNC_1(VAR_9, VAR_10->e_entry);
  VAR_9->e_phoff = FUNC_1(VAR_9, VAR_10->e_phoff);
  VAR_9->e_shoff = FUNC_1(VAR_9, VAR_10->e_shoff);
  break;

 default:
  FUNC_7("Unknown ELF class.\n");
  return -VAR_0;
 }

 return FUNC_3(VAR_9, VAR_8) ? 0 : -VAR_6;
}
