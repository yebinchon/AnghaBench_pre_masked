
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_mixart_elf32_phdr {scalar_t__ p_type; scalar_t__ p_filesz; scalar_t__ p_vaddr; scalar_t__ p_offset; } ;
struct snd_mixart_elf32_ehdr {char* e_ident; scalar_t__ e_phoff; int e_phentsize; int e_phnum; } ;
struct mixart_mgr {int dummy; } ;
struct firmware {scalar_t__ data; } ;
typedef int elf_programheader ;


 int VAR_0 ;
 int FUNC_0 (struct mixart_mgr*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct snd_mixart_elf32_phdr*,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct mixart_mgr *VAR_1, const struct firmware *VAR_2 )
{
 char VAR_3[4] = {0x7f,'E','L','F'};
 struct snd_mixart_elf32_ehdr *VAR_4;
 int VAR_5;

 VAR_4 = (struct snd_mixart_elf32_ehdr *)VAR_2->data;
 for( VAR_5=0; VAR_5<4; VAR_5++ )
  if ( VAR_3[VAR_5] != VAR_4->e_ident[VAR_5] )
   return -VAR_0;

 if( VAR_4->e_phoff != 0 ) {
  struct snd_mixart_elf32_phdr VAR_6;

  for( VAR_5=0; VAR_5 < FUNC_1(VAR_4->e_phnum); VAR_5++ ) {
   u32 VAR_7 = FUNC_2(VAR_4->e_phoff) + (u32)(VAR_5 * FUNC_1(VAR_4->e_phentsize));

   FUNC_3( &VAR_6, VAR_2->data + VAR_7, sizeof(VAR_6) );

   if(VAR_6.p_type != 0) {
    if( VAR_6.p_filesz != 0 ) {
     FUNC_4( FUNC_0( VAR_1, FUNC_2(VAR_6.p_vaddr)),
           VAR_2->data + FUNC_2( VAR_6.p_offset ),
           FUNC_2( VAR_6.p_filesz ));
    }
   }
  }
 }
 return 0;
}
